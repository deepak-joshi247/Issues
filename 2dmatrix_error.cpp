// So while solving a LEETCODE problem of 2D matrix in c++ , I got stuck in a error while submitting my code 
// could please help in it - 

    `bool searchMatrix(vector<vector<int>>& matrix, int target) {
            //by using hit and try method and little bit of binary spice
            int row=matrix.size();;
            int col=matrix[0].size();
            int rowIndex=0; // this like the variable start used in binary 
            int colIndex= col-1; // this like the variable end
            
           
           
           
            while(rowIndex<row && colIndex >=0)   // if it become false means all element are checked
            {     
                    int element =((matrix[rowIndex][colIndex])/2);  // like mid variable;
                 
                  if(element==target)         // case 1
                        {
                            return true;       // element found
                        }
                    else if(element>target) // case 2
                        {
                            colIndex--;         // it is at left side of element 
                        }
    
                    else
                    {
                        rowIndex++;         // it is down the row where larger number are present
                    }
               
            }
            return false;
        }

// error is shown as -

// Input matrix = [[-5]]

// target = -2

// Output true

// Expected false


// I am extremly sorry for bad way to showing and writting , I would be glad If you tell me 
//    how to that thing also just some tips //
