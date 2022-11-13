<div class="container-input">
  <span>Tamanho <span id="valor"></span> caracteres</span>
  <input id="slider" class="slider" type="range" min="5" max="25" value="15" />
  <button id="button" class="button-cta" onclick="generatePassword()">Gerar senha</button>
</div>
<div id="container-password" onclick="copyPassword()" class="container-password hide">
  <span class="title">Sua senha gerada foi:</span>
  <span id="password" class="password"></span>
  <span class="tooltip">Clique na senha para copiar. 👆</span>
</div> #20565c