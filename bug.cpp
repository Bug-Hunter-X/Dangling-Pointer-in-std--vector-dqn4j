std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) { 
     vec.push_back(i); 
 } 
 
 int* ptr = &vec[0]; // Potential problem here 
 
 // ... later in the code ... 
 
 vec.push_back(10);  // Resizing the vector invalidates the pointer!