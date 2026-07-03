[Uploading Диаграмма без названия (2).drawio…]()
<mxfile host="app.diagrams.net">
  <diagram name="Страница-1" id="xb3LFfVejxxQJojq4RDj">
    <mxGraphModel dx="808" dy="1638" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="fVOClc0inPKivt__LJye-5" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="Coffee" vertex="1">
          <mxGeometry height="70" width="140" x="490" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-8" parent="fVOClc0inPKivt__LJye-5" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Cost(): double&lt;div&gt;+ Description(): string&lt;/div&gt;" vertex="1">
          <mxGeometry height="44" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-13" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="SimpleCoffee" vertex="1">
          <mxGeometry height="80" width="140" x="350" y="110" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-14" parent="fVOClc0inPKivt__LJye-13" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Cost(): 100&lt;div&gt;+ Description()&lt;/div&gt;" vertex="1">
          <mxGeometry height="54" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-19" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="CoffeeDecorator" vertex="1">
          <mxGeometry height="80" width="140" x="630" y="110" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-20" parent="fVOClc0inPKivt__LJye-19" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="&lt;div&gt;- coffee: Coffee*&lt;/div&gt;+ Cost()&lt;div&gt;+ Description()&lt;/div&gt;" vertex="1">
          <mxGeometry height="54" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-34" edge="1" parent="1" source="fVOClc0inPKivt__LJye-21" style="edgeStyle=none;curved=0;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;endArrow=none;endFill=0;">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="280" y="220" />
            </Array>
            <mxPoint x="559.9999999999998" y="220" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-21" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="MilkDecorator" vertex="1">
          <mxGeometry height="70" width="140" x="210" y="260" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-22" parent="fVOClc0inPKivt__LJye-21" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Cost(): +50&lt;div&gt;+ Description()&lt;/div&gt;" vertex="1">
          <mxGeometry height="44" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-32" edge="1" parent="1" source="fVOClc0inPKivt__LJye-23" style="edgeStyle=none;curved=0;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0;entryY=0.5;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;endArrow=block;endFill=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="560" y="150" />
            </Array>
            <mxPoint x="559.9999999999998" y="237" as="sourcePoint" />
            <mxPoint x="629.9999999999998" y="150.0000000000001" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-23" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="SugarDecorator" vertex="1">
          <mxGeometry height="70" width="140" x="490" y="250" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-24" parent="fVOClc0inPKivt__LJye-23" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Cost(): +20&lt;div&gt;+ Description()&lt;/div&gt;" vertex="1">
          <mxGeometry height="44" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-36" edge="1" parent="1" source="fVOClc0inPKivt__LJye-25" style="edgeStyle=none;curved=0;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;startArrow=none;startFill=0;endArrow=none;endFill=0;">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="840" y="220" />
            </Array>
            <mxPoint x="560" y="220.0000000000001" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-25" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="CinnamonDecorator" vertex="1">
          <mxGeometry height="70" width="140" x="770" y="250" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-26" parent="fVOClc0inPKivt__LJye-25" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Cost(): +30&lt;div&gt;+ Description()&lt;/div&gt;" vertex="1">
          <mxGeometry height="44" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-37" edge="1" parent="1" source="fVOClc0inPKivt__LJye-13" style="edgeStyle=none;curved=0;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0;entryY=0.091;entryDx=0;entryDy=0;entryPerimeter=0;fontSize=12;startSize=8;endSize=8;endArrow=block;endFill=0;dashed=1;dashPattern=1 2;" target="fVOClc0inPKivt__LJye-8">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="420" y="30" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-39" edge="1" parent="1" style="edgeStyle=none;curved=0;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=1;entryY=0.091;entryDx=0;entryDy=0;entryPerimeter=0;fontSize=12;startSize=8;endSize=8;endArrow=block;endFill=0;dashed=1;dashPattern=1 2;" target="fVOClc0inPKivt__LJye-8">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="700.28" y="40" />
              <mxPoint x="700.28" y="30" />
              <mxPoint x="660" y="30" />
            </Array>
            <mxPoint x="700.28" y="110" as="sourcePoint" />
            <mxPoint x="630" y="28.68399999999997" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-40" parent="1" style="text;html=1;whiteSpace=wrap;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;rounded=0;" value="Decorator" vertex="1">
          <mxGeometry height="30" width="60" x="530" y="-30" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-42" parent="1" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="Component" vertex="1">
          <mxGeometry height="100" width="160" x="480" y="-560" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-43" parent="fVOClc0inPKivt__LJye-42" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="- parent: Component*" vertex="1">
          <mxGeometry height="26" width="160" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-44" parent="fVOClc0inPKivt__LJye-42" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" value="" vertex="1">
          <mxGeometry height="8" width="160" y="52" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-45" parent="fVOClc0inPKivt__LJye-42" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Operation(): string&lt;div&gt;+ Add (c* Component*)&lt;/div&gt;" vertex="1">
          <mxGeometry height="40" width="160" y="60" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-46" parent="1" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="Composite" vertex="1">
          <mxGeometry height="100" width="190" x="637" y="-400" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-47" parent="fVOClc0inPKivt__LJye-46" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="- children_: vector&amp;lt;Component*&amp;gt;" vertex="1">
          <mxGeometry height="34" width="190" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-48" parent="fVOClc0inPKivt__LJye-46" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" value="" vertex="1">
          <mxGeometry height="8" width="190" y="60" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-49" parent="fVOClc0inPKivt__LJye-46" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Operation(): string" vertex="1">
          <mxGeometry height="32" width="190" y="68" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-50" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="Leaf" vertex="1">
          <mxGeometry height="90" width="140" x="340" y="-400" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-52" parent="fVOClc0inPKivt__LJye-50" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="+ Operation(): string" vertex="1">
          <mxGeometry height="64" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-58" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="Subsystem1" vertex="1">
          <mxGeometry height="80" width="140" x="390" y="-1110" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-60" parent="fVOClc0inPKivt__LJye-58" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="Operation1()&lt;div&gt;OperationN()&lt;/div&gt;&lt;div&gt;+ Returns string&lt;/div&gt;" vertex="1">
          <mxGeometry height="54" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-62" parent="1" style="swimlane;fontStyle=0;childLayout=stackLayout;horizontal=1;startSize=26;fillColor=none;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="Subsystem2" vertex="1">
          <mxGeometry height="80" width="140" x="560" y="-1110" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-63" parent="fVOClc0inPKivt__LJye-62" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="Operation1()&lt;div&gt;OperationZ()&lt;/div&gt;&lt;div&gt;+ Returns string&lt;/div&gt;" vertex="1">
          <mxGeometry height="54" width="140" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-84" edge="1" parent="1" source="fVOClc0inPKivt__LJye-64" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;endArrow=open;endFill=0;" target="fVOClc0inPKivt__LJye-62">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-87" edge="1" parent="1" source="fVOClc0inPKivt__LJye-64" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;endArrow=open;endFill=0;" target="fVOClc0inPKivt__LJye-58">
          <mxGeometry relative="1" as="geometry">
            <Array as="points">
              <mxPoint x="540" y="-1005" />
              <mxPoint x="460" y="-1005" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-64" parent="1" style="swimlane;fontStyle=1;align=center;verticalAlign=top;childLayout=stackLayout;horizontal=1;startSize=26;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=1;marginBottom=0;whiteSpace=wrap;html=1;" value="Facade" vertex="1">
          <mxGeometry height="110" width="160" x="460" y="-980" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-65" parent="fVOClc0inPKivt__LJye-64" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="- subsystem1_&lt;div&gt;- s&lt;span style=&quot;background-color: transparent; color: light-dark(rgb(0, 0, 0), rgb(255, 255, 255));&quot;&gt;&amp;nbsp;subsystem2_&lt;/span&gt;&lt;/div&gt;" vertex="1">
          <mxGeometry height="34" width="160" y="26" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-66" parent="fVOClc0inPKivt__LJye-64" style="line;strokeWidth=1;fillColor=none;align=left;verticalAlign=middle;spacingTop=-1;spacingLeft=3;spacingRight=3;rotatable=0;labelPosition=right;points=[];portConstraint=eastwest;strokeColor=inherit;" value="" vertex="1">
          <mxGeometry height="8" width="160" y="60" as="geometry" />
        </mxCell>
        <mxCell id="fVOClc0inPKivt__LJye-67" parent="fVOClc0inPKivt__LJye-64" style="text;strokeColor=none;fillColor=none;align=left;verticalAlign=top;spacingLeft=4;spacingRight=4;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;whiteSpace=wrap;html=1;" value="&lt;div&gt;+ Facade()&lt;/div&gt;&lt;div&gt;+ Operation(): string&lt;/div&gt;" vertex="1">
          <mxGeometry height="42" width="160" y="68" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
