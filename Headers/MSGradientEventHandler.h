#import "MSPointsEventHandler.h"

@class MSStyleBasicFill, NSCursor;

@interface MSGradientEventHandler : MSPointsEventHandler
{
    NSCursor *selectPointCursor;
    NSCursor *insertPointCursor;
    MSStyleBasicFill *_stylePart;
    id <MSGradientEventHandlerDelegate> _gradientDelegate;
}

+ (id)gradientHandlerForStylePart:(id)arg1 manager:(id)arg2;
@property(nonatomic) __weak id <MSGradientEventHandlerDelegate> gradientDelegate; // @synthesize gradientDelegate=_gradientDelegate;
@property(retain, nonatomic) MSStyleBasicFill *stylePart; // @synthesize stylePart=_stylePart;
- (void).cxx_destruct;
- (BOOL)canDuplicate;
- (id)layerFromSelectedLayers;
- (void)selectionDidChangeTo:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)refresh;
- (id)cursorWithDrawingBlock:(CDUnknownBlockType)arg1;
- (id)insertPointCursor;
- (id)selectPointCursor;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (void)concatTransformsForDrawSnaps;
- (BOOL)useSnaps;
- (BOOL)shouldDisplayMessageForSelectedStop;
- (id)previousStop;
- (id)nextStop;
- (id)selectedStop;
- (void)centerStopBetween;
- (void)setSelectedStopToPercentage:(long long)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)delete:(id)arg1;
- (void)setSelectedPoint:(long long)arg1;
- (BOOL)hasSelectedPoint;
- (BOOL)canInsertPointAtMouse:(struct CGPoint)arg1;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)handleLinesColor;
- (void)drawHandleLines;
- (long long)addStopAtPosition:(struct CGPoint)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)repairGradientIfNecessary;
- (struct CGRect)paddingRectAroundPoints;
- (void)colorMagnifierAction:(id)arg1;
- (id)gradient;
- (id)points;
- (void)drawDotAtPoint:(struct CGPoint)arg1 index:(long long)arg2 selected:(BOOL)arg3;
- (void)handlerWillLoseFocus;
- (void)returnToDefaultHandlerByClickingOutside;
- (void)handlerGotFocus;
- (void)didUndoNotification:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;

@end
