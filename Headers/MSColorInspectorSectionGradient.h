#import "MSColorInspectorSection.h"

#import "MSGradientBarViewDelegate.h"
#import "MSGradientEventHandlerDelegate.h"

@class MSGradientBarView, MSGradientEventHandler, NSButton, NSString;

@interface MSColorInspectorSectionGradient : MSColorInspectorSection <MSGradientEventHandlerDelegate, MSGradientBarViewDelegate>
{
    NSButton *smoothOpacityButton;
    MSGradientBarView *gradientBarView;
    NSButton *_rotateLeftButton;
    NSButton *_rotateRightButton;
    MSGradientEventHandler *_gradientHandler;
}

@property(retain, nonatomic) MSGradientEventHandler *gradientHandler; // @synthesize gradientHandler=_gradientHandler;
@property(retain, nonatomic) NSButton *rotateRightButton; // @synthesize rotateRightButton=_rotateRightButton;
@property(retain, nonatomic) NSButton *rotateLeftButton; // @synthesize rotateLeftButton=_rotateLeftButton;
- (void).cxx_destruct;
- (unsigned long long)assetType;
- (void)dealloc;
- (void)closeGradientHandler;
- (void)popoverWillClose;
- (id)linearGradients;
- (id)rotateTransformForGradient:(id)arg1 angle:(double)arg2;
- (void)rotateGradientsByAngle:(double)arg1;
- (void)rotateRightAction:(id)arg1;
- (void)rotateLeftAction:(id)arg1;
- (void)refreshAction:(id)arg1;
- (void)drawGradient:(id)arg1 inRect:(struct CGRect)arg2;
- (void)updateOtherGradientsToReflectChanges;
- (void)gradientHandlerDidChangeGradient:(id)arg1;
- (void)gradientHandlerWillLoseFocus:(id)arg1;
- (void)gradientHandlerDidChangeCurrentPoint:(id)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (void)switchToGradientHandler;
- (BOOL)pickerView:(id)arg1 insertPresetFromDragRepresentation:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pickerView:(id)arg1 dragRepresentationForItemAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)gradientBarAction:(id)arg1;
- (long long)fillType;
- (void)switchToGradientHandlerIfNecessary;
- (void)validate;
- (id)assetPickerViewKeys;
- (id)viewsWithColorPickerView:(id)arg1 blendingView:(id)arg2;
- (void)gradientBarChanged:(id)arg1;
- (void)awakeFromNib;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
