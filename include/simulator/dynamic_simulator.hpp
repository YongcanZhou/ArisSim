//
// Created by ZHOUYC on 2022/6/14.
//

#ifndef DYNAMIC_H_
#define DYNAMIC_H_


namespace ArisSim {
    auto InitSimulator()->void;

    [[noreturn]] auto SimThreadGetData()->void;
    auto DynamicSimulator(std::array<double, 7 * 16>& link_pm_)->void;
    auto SimPlan()->void;

}

#endif
