<div class="page">
    <div class="wrap">
      <div class="page_tit">
        <h3 class="wow fadeInUp" data-wow-delay=".1s"><span><em>{dede:field name='typename'/}</em></span></h3>
        <p class="wow fadeInUp" data-wow-delay=".3s">{dede:field name='typenameen'/}</p>
      </div>
      <div class="index_news">
        <div class="left wow fadeInUp" data-wow-delay=".1s">
          <div class="tit"> {dede:type typeid='16'}
            <h3>[field:typename/]</h3>
            {/dede:type} </div>
          {dede:arclist typeid='16' row='1' titlelen='50' orderby='pubdate'}
          <div class="img"> <a href="[field:arcurl/]"></a> <img src="[field:picname/]"/> </div>
          <div class="web">
            <h4><a href="[field:arcurl/]">[field:title/]</a><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span></h4>
            <p>[field:description function="cn_substr(@me,160)"/]...</p>
          </div>
          {/dede:arclist} </div>
        <div class="right wow fadeInUp" data-wow-delay=".1s">
          <div class="tit"> {dede:type typeid='17'}
            <h3>[field:typename/]</h3>
            {/dede:type} </div>
          <div class="list">
            <ul>
              {dede:arclist typeid='17' row='3' titlelen='50' orderby='pubdate'}
              <li>
                <div class="img"> <a href="[field:arcurl/]"></a> <img src="[field:picname/]"/> </div>
                <div class="web">
                  <div class="wd_w"> <span>问</span>
                    <h4><a href="[field:arcurl/]">[field:title/]</a></h4>
                    <div class="clear"></div>
                  </div>
                  <div class="wd_d"> <span>答</span>
                    <p><a href="[field:arcurl/]">[field:description function="cn_substr(@me,140)"/]...</a></p>
                    <div class="clear"></div>
                  </div>
                </div>
                <div class="clear"></div>
              </li>
              {/dede:arclist}
            </ul>
          </div>
        </div>
        <div class="clear"></div>
        <div class="more"> <a href="{dede:field name='typeurl'/}">更多</a> </div>
      </div>
    </div>
  </div>