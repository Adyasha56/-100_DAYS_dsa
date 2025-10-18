//brute force approach to find the product with the highest sales count
/*let sales = [
  { product: 'A', count: 3 },
  { product: 'B', count: 5 },
  { product: 'A', count: 2 }
];

let maxProduct = null;
let maxCount = 0;

for (let i = 0; i < sales.length; i++) {
  let currentProduct = sales[i].product;
  let total = 0;

  for (let j = 0; j < sales.length; j++) {
    if (sales[j].product === currentProduct) {
      total += sales[j].count;
    }
  }

  if (total > maxCount) {
    maxCount = total;
    maxProduct = currentProduct;
  }
}

console.log(maxProduct);
*/

//better approach using a hash map to find the product with the highest sales count
/*
let sales = [
  { product: 'A', count: 3 },
  { product: 'B', count: 5 },
  { product: 'A', count: 2 }
];

let productCounts = {};

for (let {product, count} of sales) {
  productCounts[product] = (productCounts[product] || 0) + count;
}

let maxProduct = null;
let maxCount = 0;

for (let product in productCounts) {
  if (productCounts[product] > maxCount) {
    maxCount = productCounts[product];
    maxProduct = product;
  }
}

console.log(maxProduct); // 'B'
*/

//optimal approach using reduce to find the product with the highest sales count
let sales = [
  { product: 'A', count: 3 },
  { product: 'B', count: 5 },
  { product: 'A', count: 2 }
];

let productCounts = {};
let maxProduct = null;
let maxCount = 0;

for (let {product, count} of sales) {
  productCounts[product] = (productCounts[product] || 0) + count;
  
  if (productCounts[product] > maxCount) {
    maxCount = productCounts[product];
    maxProduct = product;
  }
}

console.log(maxProduct); // 'B'




