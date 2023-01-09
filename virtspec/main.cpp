#include <iostream>
#include <string>

class BaseV {
    public:
    BaseV() {}
    ~BaseV() {}
    std::string virtual f() {
        return "Base";
    }
};

class NextO : public BaseV {
    public:
    NextO():BaseV() {}
    ~NextO() {}
    std::string f() override {
        return "Next";
    }
};

class BaseP {
    public:
    BaseP() {}
    ~BaseP() {}
    std::string f() {
        return "Base";
    }
};

class NextP : public BaseP {
    public:
    NextP():BaseP() {}
    ~NextP() {}
    std::string f() {
        return "Next";
    }
};

void print(std::string s, int indent) {
    std::string si(indent, ' ');
    std::cout << si + s + "\n";
}

int main() {

    BaseV bv;
    NextO no;
    BaseP bp;
    NextP np;

    std::string descr_bc_vf = "Base class - virtual method:          ";
    std::string descr_dc_of = "Derived class - overridden method:    ";
    std::string descr_bc_nv = "Base class - non-virtual method:      ";
    std::string descr_dc_no = "Derived class - non-overrdden method: ";
    std::string divider(50, '-');
    
    print("Invoking methods of class instances",0);
    print(descr_bc_vf + bv.f(), 4);
    print(descr_dc_of + no.f(), 4);
    print(descr_bc_nv + bp.f(), 4);
    print(descr_dc_no + np.f(), 4);
    print(divider, 0);

    print("Invoking methods of references", 0);
    BaseV& bvr = bv;
    print(descr_bc_vf + bvr.f(), 4);
    NextO& nor = no;
    print(descr_dc_of + nor.f(), 4);
    BaseP& bpr = bp;
    print(descr_bc_nv + bpr.f(), 4);
    NextP& npr = np;
    print(descr_dc_no + nor.f(), 4);
    BaseV& bnr = no;                                                        // 'BaseV' here is a misprint for 'NextO'
    print("Base class reference to derived class instance: " + bnr.f(), 4); // magic happens here

    print(divider, 0);
    print("Invoking methods of class pointers", 0);
    BaseV* bvp = &bv;
    print(descr_bc_vf + bvp->f(), 4);
    NextO* nop = &no;
    print(descr_dc_of + nop->f(), 4);
    BaseP* bpp = &bp;
    print(descr_bc_nv + bpp->f(), 4);
    NextP* npp = &np;
    print(descr_dc_no + npp->f(), 4);

    print(divider, 0);
    print("Invoking methods using explicit base class name", 0);
    print(descr_bc_vf + bvr.BaseV::f(), 4);
    print(descr_dc_of + nor.BaseV::f(), 4);
    print(descr_bc_nv + bpr.BaseP::f(), 4);
    print(descr_dc_no + npr.BaseP::f(), 4);

    return 0;
}