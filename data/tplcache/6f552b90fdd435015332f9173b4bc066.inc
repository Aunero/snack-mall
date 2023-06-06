<div class="page page1">
    <div class="wrap">
      <div class="page_tit">
        <h3 class="wow fadeInUp" data-wow-delay=".1s"><span><em>热门推荐</em></span></h3>
        <p class="wow fadeInUp" data-wow-delay=".2s">HOT RECOMMEND</p>
      </div>
      <div class="explosive">
        <div class="owl explosive_owl">
          <div class="owl_cur"> <span class="prev"></span><span class="next"></span> </div>
          <div class="explosive_items owlCarousel wow fadeInUp" data-wow-delay=".1s"> {dede:arclist titlelen='50' flag='c'}
            <div class="item">
              <div class="explosive_list">
                <h4>NO.[field:global.autoindex/]</h4>
                <a href="[field:arcurl/]">
                <div class="img"> <img src="[field:picname/]"/> </div>
                <div class="web">
                  <div class="text">
                    <h3>[field:title/]</h3>
                    <p>[field:typename/]</p>
                  </div>
                  <div class="more">
                    <label>详情</label>
                  </div>
                </div>
                </a> </div>
            </div>
            {/dede:arclist} </div>
        </div>
      </div>
    </div>
  </div>
  <div class="page">
    <div class="wrap">
      <div class="page_tit">
        <h3 class="wow fadeInUp" data-wow-delay=".1s"><span><em>{dede:field name='typename'/}</em></span></h3>
        <p class="wow fadeInUp" data-wow-delay=".2s">WAREHOUSE</p>
      </div>
      <div class="warehouse">
        <div class="left">
          <div class="tit"> <span>系列分类</span> </div>
          <div class="list">
            <ul class="wow_list">
              {dede:channel type='son' currentstyle="
              <li class='on wow fadeInUp'><a href='~typelink~'><i></i>~typename~</a></li>
              "}
              <li class="wow fadeInUp"><a href="[field:typeurl/]"><i></i>[field:typename/]</a></li>
              {/dede:channel}
            </ul>
            <div class="line"></div>
            <div class="more"> <a href="{dede:field name='typeurl'/}">更多</a> </div>
          </div>
        </div>
        <div class="right">
          <div class="list">
            <ul class="wow_list">
              {dede:arclist row='6' titlelen='50' orderby='pubdate'}
              <li class="wow fadeInUp"> <a href="[field:arcurl/]">
                <div class="img"> <img src="[field:picname/]"/> </div>
                <div class="web">
                  <p>[field:title/]
                    <label>详情</label>
                  </p>
                </div>
                </a> </li>
              {/dede:arclist}
            </ul>
            <div class="clear"></div>
          </div>
        </div>
        <div class="clear"></div>
      </div>
    </div>
  </div>