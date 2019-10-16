<?php
$z[0]=Array("include","",3270,3305);
$z[0][4]['filename']="head.htm";
$z[1]=Array("field","",3859,3881);
$z[1][4]['name']="typename";
$z[2]=Array("field","",4774,4796);
$z[2][4]['name']="position";
$z[3]=Array("list","\r\n                    <li class='col-3-1 not-animated' data-animate='fadeInUp'>\r\n                      <div class=\"product-item\">\r\n                        <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\"/></a></div>\r\n                        <div class=\"portfolio-title\">\r\n                          <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                        </div>\r\n                      </div>\r\n                    </li>\r\n                    ",5340,5937);
$z[3][4]['pagesize']="12";
$z[3][4]['titlelen']="36";
$z[4]=Array("pagelist","",6075,6141);
$z[4][4]['listitem']="index,end,pre,next,pageno";
$z[4][4]['listsize']="5";
$z[5]=Array("field","\$ID = @me; \$sql = \"SELECT * FROM `dede_arctype` WHERE id=\$ID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); \$relID = \"\$row[reid]\"; if(\$relID == 0) {@me = \$row[typename];}else{\$sql = \"SELECT `typename` FROM `dede_arctype` WHERE id=\$relID\";\$query = mysql_query(\$sql);\$row=mysql_fetch_array(\$query); @me = \$row[typename];}",6447,6831);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\r\n                <li><a href=\"[field:typeurl/]\" target=\"\">[field:typename/]</a><i></i></li>\r\n                ",6939,7165);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[7]=Array("include","",8000,8035);
$z[7][4]['filename']="foot.htm";

?>