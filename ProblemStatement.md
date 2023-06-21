# Simple Linear Regression Predictor

In the city of LinReg, the mayor is trying to predict the happiness index of the citizens. The happiness index is a measure from 1 to 100 that indicates the overall happiness of the citizens in the city.

The mayor has hired you, a renowned data scientist, to build a model that can predict the happiness index based on a single factor. You decide to use a simple linear regression model for this task.

You are given `n` past records. Each record contains a single factor and the happiness index for that record. The factor is a real number and the happiness index is an integer.

After building the linear regression model, the mayor will provide `q` queries. Each query contains a single factor and you need to predict the happiness index for each query.

Write a program that takes the `n` records and `q` queries as input and outputs the predicted happiness index for each query.

## Input

- The first line contains an integer `n` (1 ≤ `n` ≤ 1000), the number of records.
- The next `n` lines each contain a real number (the factor, between -1000 and 1000, inclusive) and an integer (the happiness index, between 1 and 100, inclusive) for that record.
- The next line contains a single integer `q` (1 ≤ `q` ≤ 1000), the number of queries.
- The next `q` lines each contain a real number, the factor for each query.

## Output

- Output `q` lines. Each line should contain a single integer, the predicted happiness index for the corresponding query. The predicted happiness index should be rounded to the nearest integer.

## Example

### Input

5
1.2 56
3.4 78
5.6 90
7.8 65
9.1 45
3
2.3
4.5
6.7

### Output

70
67
65

In this example, we have 5 records and each record has a single factor. We have 3 queries and we need to predict the happiness index for each query.

## Note

This problem requires knowledge of simple linear regression, which is a statistical method used to predict a dependent variable based on a single independent variable. In this problem, the happiness index is the dependent variable and the factor is the independent variable.

The solution to this problem involves building a simple linear regression model using the given records and then using the model to predict the happiness index for the queries. This can be done using various methods, such as computing the slope and intercept of the least squares regression line.

After building the linear regression model, the mayor will provide `q` queries. Each query contains a single factor and you need to predict the happiness index for each query. The happiness index is calculated as follows:

1. Compute the raw predicted value `y` using the linear regression model.
2. Apply the sigmoid function to `y` to get a value between 0 and 1: `s = 1 / (1 + exp(-y))`.
3. Scale and shift `s` to get a value between 1 and 100: `happiness_index = 1 + 99 * s`.

So, Happiness always lies between 1 and 100 (included)
