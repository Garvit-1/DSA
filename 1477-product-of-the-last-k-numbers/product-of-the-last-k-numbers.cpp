class ProductOfNumbers {
public:
    vector<int> product_sum;
    ProductOfNumbers() {
        product_sum = {1};
    }
    void add(int num) {
        if (num != 0) {
            product_sum.push_back(product_sum.back() * num);
        } else {
            product_sum.clear();
            product_sum.push_back(1);
        }
    }
    
    int getProduct(int k) {
        if (k + 1 > product_sum.size())
            return 0;
    
        return product_sum.back() / product_sum[product_sum.size() - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
