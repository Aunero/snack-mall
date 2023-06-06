<div class="page page2">
    <div class="index_about">
      <div class="page_tit">
        <h3 class="wow fadeInUp" data-wow-delay=".1s"><span><em>{dede:field name='typename'/}</em></span></h3>
        <p class="wow fadeInUp" data-wow-delay=".3s">{dede:field name='typenameen'/}</p>
      </div>
      <div class="list wow_list">
        <ul>
          <li class="wow fadeInUp">
            <h3>106<em>+</em></h3>
            <p>品牌成立106年</p>
          </li>
          <li class="wow fadeInUp">
            <h3>500<em>+</em></h3>
            <p>零食专卖店全球500多家</p>
          </li>
          <li class="wow fadeInUp">
            <h3>600<em>+</em></h3>
            <p>高端美味零食多达600多个品种</p>
          </li>
          <li class="wow fadeInUp">
            <h3>2000<em>+</em></h3>
            <p>全球2000多万优秀员工</p>
          </li>
        </ul>
        <div class="clear"></div>
      </div>
      <div class="web wow fadeInUp" data-wow-delay=".1s">
        <p>{dede:sql sql='Select content from dede_arctype where id=2'}
          [field:content function='cn_substr(html2text(@me),600)'/]...
          {/dede:sql}</p>
        <div class="more"> <a href="{dede:field name='typeurl'/}">更多</a> </div>
      </div>
    </div>
  </div>