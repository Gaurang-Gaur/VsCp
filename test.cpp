// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int mostBooked(int n, vector<vector<int>>& meetings) {

//             // algo
//             // 1.sort according to starttime 
//             // 2.then assign unused rooms
//             // 3.then assign used rooms according to conditions

//         sort(meetings.begin(),meetings.end());
//         // sort acc . to start time

//     // we will be creating the vector for storing the end time of each meeting held and
//     // updating accordingly

//     vector<long long> lastAvailableTime(n,0);
//     vector<int> noOfTimeRoomUsed(n,0);

//     // now, just check each meeting starting time and assign room to them

//     for(auto meet: meetings){

//         int start=meet[0];
//         int end=meet[1];
//         long long duration =end-start ;
//         bool found=false;
//         long long earlyEndRoomTime=LLONG_MAX;
//         int earlyRoom=0;
//         // what if no room available them we are going to start 
//         // at different time then given starting time so. avaible ending time is going to 
//         // change according to the new starting time and will we be calculating using duration 

//         for(int room=0;room<n;room++){


//             if(lastAvailableTime[room]<= end){

//                 lastAvailableTime[room]=end ; // updating here
//                 noOfTimeRoomUsed[room]++;
//                 found=true;

            
                

//             }
//             // checking inside the lastAvailable array which have end time
//             // that which one gonna end first;

//             if(lastAvailableTime[room]<earlyEndRoomTime){
//                 lastAvailableTime[room]=earlyEndRoomTime;
//                 earlyRoom=room;
//             }
//         }
//         // check of the room not find available room meaning all rooms are having meeting 
//     // then delay araise 
//     // then what we have to do?
//     // we have to find the room which available with least delay

//     if(!found){
//         // pick that room which will have earlyEndRoomTime
//         lastAvailableTime[earlyRoom]+=duration;
//         // previous meeting end time and plus duration of next time
//         noOfTimeRoomUsed[earlyRoom]++;

//     }

    

        
//     }
//     int resultRoom=-1;
//     int maxRoom =0;

//     for(int room=0;room<n;room++){

//         if( noOfTimeRoomUsed[room]>maxRoom){
//             maxRoom=noOfTimeRoomUsed[room];
//             resultRoom=room;
//         }
//     }

//     return resultRoom;


        
//     }

// int main() {
//     // Write C++ code here
//     for(int i=0;i<5;i++){
        
        
//         if(true){
//             cout<<i<<" "<<endl;
//             break;
//         }
//         cout<<20<<endl;
        
//     }

//     return 0;
// }