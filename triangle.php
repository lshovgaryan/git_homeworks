<?php 

$count = 20;

for($i=1;$i<=$count;$i++){
    for($i1=1;$i1<=$i;$i1++){
        echo '*';
    }
    echo '<br>';
}
 
for($i=$count;$i<=$count and $i>0;$i--){
    for($i1=$i;$i1<=$i and $i1>0;$i1--){
        echo '*';
    }
    echo '<br>';
}


