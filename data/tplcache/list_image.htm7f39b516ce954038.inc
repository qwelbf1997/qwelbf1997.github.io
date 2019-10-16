<?php
$z[0]=Array("field","",435,454);
$z[0][4]['name']="title";
$z[1]=Array("global","",455,481);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",522,551);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",591,649);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3309,3344);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",3898,3920);
$z[5][4]['name']="typename";
$z[6]=Array("field","",4813,4835);
$z[6][4]['name']="position";
$z[7]=Array("list","\r\n                    <li class='col-3-1 not-animated' data-animate='fadeInUp'>\r\n                      <div class=\"product-item\">\r\n                        <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\"/></a></div>\r\n                        <div class=\"portfolio-title\">\r\n                          <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                        </div>\r\n                      </div>\r\n                    </li>\r\n                    ",5379,5976);
$z[7][4]['pagesize']="12";
$z[7][4]['titlelen']="36";
$z[8]=Array("pagelist","",6114,6180);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",6486,6870);
$z[9][4]['name']="typeid";
$z[9][4]['runphp']="yes";
$z[10]=Array("channel","\r\n                <li><a href=\"[field:typeurl/]\" target=\"\">[field:typename/]</a><i></i></li>\r\n                ",6978,7204);
$z[10][4]['type']="son";
$z[10][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[11]=Array("include","",8039,8074);
$z[11][4]['filename']="foot.htm";

?>