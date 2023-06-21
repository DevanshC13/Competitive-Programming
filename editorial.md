# Editorial: Simple Linear Regression Predictor

In this problem, you were tasked with building a simple linear regression model to predict the happiness index based on a single factor. The happiness index is a measure from 1 to 100 that indicates the overall happiness of the citizens in the city of LinReg.

## Approach

To solve this problem, we can follow these steps:

1. **Data Preparation:** Read the number of records `n` and the factor-happiness pairs from the input. Store them in a suitable data structure for further processing.

2. **Model Training:** Perform simple linear regression to build the regression model. Calculate the slope `m` and the y-intercept `c` using the least squares method.

3. **Predicting Happiness Index:** For each query, substitute the query factor into the regression model equation `y = mx + c` to get the predicted happiness index `y`. Apply the sigmoid function to `y` and then scale and shift the value to get the final predicted happiness index.

4. **Output:** Print the predicted happiness index for each query.

## Complexity Analysis

The time complexity of this solution is O(n + q), where `n` is the number of records and `q` is the number of queries. This is because we need to process all the records to build the regression model and then process each query to predict the happiness index.

The space complexity of this solution is O(n), as we need to store the factor-happiness pairs.

## Implementation

You can find the implementation of this solution in the `main.cpp` file in this repository.

## Notes

- The current solution assumes a linear relationship between the factor and the happiness index. More complex models or feature engineering techniques could be explored to capture non-linear relationships.

- The choice of the sigmoid function and scaling factors can be modified to experiment with different mappings of raw predictions to the happiness index range.
