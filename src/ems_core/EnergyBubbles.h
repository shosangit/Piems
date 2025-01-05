#ifndef ENERGY_BUBBLES_H
#define ENERGY_BUBBLES_H

class EnergyBubbleInterface{
    public:
        virtual double getRateInputEnergy() const = 0;
        virtual void setRateInputEnergy(double value) = 0;
        virtual double getRateOutputEnergy() const = 0;
        virtual void setRateOutputEnergy(double value) = 0;
        virtual double getStoredEnergy() const = 0;
        virtual void setStoredEnergy(double value) = 0;
        virtual void printStatus() const = 0;
};

class EnergyBubbles : public EnergyBubbleInterface {
    public:
        EnergyBubbles();
        EnergyBubbles(double rateInputEnerygy, double rateOutputEnerygy, double storedEnergy);

        // 获取和设置总能量属性的方法
        double getRateInputEnergy() const override;
        void setRateInputEnergy(double value) override;
        double getRateOutputEnergy() const override;
        void setRateOutputEnergy(double value) override;
        double getStoredEnergy() const override;
        void setStoredEnergy(double value) override;

        // 打印当前状态
        void printStatus() const override;

    private:
        double _rateInputEnergy;   // 对内输入的能量
        double _rateOutputEnergy;  // 对外输出的能量
        double _storedEnergy;  // 存储的能量
};

#endif // ENERGY_BUBBLES_H