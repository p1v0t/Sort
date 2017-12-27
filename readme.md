# Readme - Sort
Some of comparision based sorting algorithms implemented in generic form using C
 ## Usage
 You can use any of these implementation by including to the source. Most of algorithms implemented std qsort() fashion
 ``` void qsort( void *ptr, size_t count, size_t size, int (*cmp)(const void *, const void *) ) ```
 
If you want to use insertion sort for example, you should try

```void insertionSort( void *ptr, size_t count, size_t size, int (*cmp)(const void *, const void *) )```

where ```ptr``` is pointer to array, ```count``` is number of elements in the array, ```size``` is size of every single element of the array, ```cmp``` is comparision function, an function pointer to int. You can use following comparision function:
```
#define TYPE int

static int cmp(const void *a, const void *b){
  const TYPE da = *((const TYPE *) a);
  const TYPE db = *((const TYPE *) b);
  
  return (da < db) ? 1 : (da == db) ? 0 : -1;
}
```

 ------

| Sort       			                                                | Worst Case    | Average Case   	| Best Case        | 
| -------------			 |:-------------: |:-------------:													| -----:		    |
|  [Bogo](https://en.wikipedia.org/wiki/Bogosort)   					| O((n+1)!)	|O((n+1)!)		  	 | O(n)					|
|  [Bubble](https://en.wikipedia.org/wiki/Bubble_sort)   				| O(n<sup>2</sup>)|	O(n<sup>2</sup>) | O(n)				|
|  [Cocktail Shaker](https://en.wikipedia.org/wiki/Cocktail_shaker_sort)| O(n<sup>2</sup>) |O(n<sup>2</sup>)		| O(n)		|
|  [Selection](https://en.wikipedia.org/wiki/Selection_sort)   			| O(n<sup>2</sup>) |O(n<sup>2</sup>) | O(n<sup>2</sup>)	|
|  [Gnome](https://en.wikipedia.org/wiki/Gnome_sort)   				    | O(n<sup>2</sup>)|	O(n<sup>2</sup>) |  O(n<sup>2</sup>)|
|  [Comb](https://en.wikipedia.org/wiki/Comb_sort)   					| O(n<sup>2</sup>) |O(nlogn) |O(nlogn)              	|
|  [Insertion](https://en.wikipedia.org/wiki/Insertion_sort)   			| O(n<sup>2</sup>)|	O(n<sup>2</sup>) |O(n)				|
|  [Shell](https://en.wikipedia.org/wiki/Shellsort)   					| O(n(log(n))<sup>2</sup>) | O(n(log(n))<sup>2</sup>)|O(nlogn)	|
|  [Merge Sort](https://en.wikipedia.org/wiki/Merge_sort)  				| O(nlogn)	| O(nlogn)		 |O(nlogn)		            |				
|  [Quick Sort](https://en.wikipedia.org/wiki/Quicksort)  		 		| O(n<sup>2</sup>)| 	O(nlogn)	|O(nlogn)	    	|
|  [Heap Sort](https://en.wikipedia.org/wiki/Heapsort)  		 		| O(nlogn)|	 O(nlogn)			 |O(nlogn)	        	|







