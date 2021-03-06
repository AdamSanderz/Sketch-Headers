//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BCColorPickerBaseView.h"

@interface BCColorPickerSliderView : BCColorPickerBaseView
{
    BOOL _handlingHistoryCoalescing;
    BOOL _groupingUndo;
    double _value;
}

@property(nonatomic, getter=isGroupingUndo) BOOL groupingUndo; // @synthesize groupingUndo=_groupingUndo;
@property(nonatomic) BOOL handlingHistoryCoalescing; // @synthesize handlingHistoryCoalescing=_handlingHistoryCoalescing;
@property(nonatomic) double value; // @synthesize value=_value;
- (double)valueForEvent:(id)arg1;
- (double)valueForXPosition:(double)arg1;
- (double)xPositionForValue:(double)arg1;
- (struct CGRect)activeBounds;
- (void)drawSelectionMarkerAtPosition:(long long)arg1;
- (struct CGRect)markerRectAtPosition:(double)arg1;
- (struct CGRect)markerRectForValue:(double)arg1;
- (void)drawForeground;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

