std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) { 
     vec.push_back(i); 
 } 
 
 // Correct approach: Use iterators
 for (auto it = vec.begin(); it != vec.end(); ++it) { 
     // Process elements using iterators
     // ... 
 } 
 
 // Or access using indexing 
 for (size_t i = 0; i < vec.size(); ++i) { 
     // Access elements using vec[i]
     // ... 
 } 
 
 vec.push_back(10); // Resizing is now safe