#include <bits/stdc++.h>
using namespace std;

class active_region {
   protected:
    double VBB, VCC, VBE, RB, RC, Beta;

   public:
    virtual void DC_analysis();
};
class saturation_region : public active_region {
   public:
    void DC_analysis();
};
void active_region::DC_analysis() {
    // 實作部分
    // Complete the code
    cin >> VBB >> VCC >> VBE >> RB >> RC >> Beta;
    double IB, IC, IE, VCE;
    IB = (VBB - VBE) / RB;
    IC = Beta * IB;
    IE = (1 + Beta) * IB;
    VCE = VCC - (IC * RC);
    cout << fixed << setprecision(2) << IC << ' ' << IB << ' ' << IE << ' ' << VCE << '\n';
}
void saturation_region::DC_analysis() {
    // 實作部分
    // Complete the code
    cin >> VBB >> VCC >> VBE >> RB >> RC >> Beta;
    double IB, IC, IE, VCE;
    IB = (VBB - VBE) / RB;
    IC = (VCC - VCE) / RC;
    IE = IB + IC;
    VCE = 0.2;
    cout << fixed << setprecision(2) << IC << ' ' << IB << ' ' << IE << ' ' << VCE << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    bool region;
    cin >> region;
    active_region *ptr = (region == true ? new active_region : new saturation_region);
    ptr->DC_analysis();

    return 0;
}
