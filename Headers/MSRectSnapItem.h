//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSnapItem.h"

@class NSArray;

@interface MSRectSnapItem : MSSnapItem
{
    BOOL _constrainProportions;
    NSArray *_layersForSnapping;
    struct CGRect _storedRect;
}

+ (id)snapperObjectWithRect:(struct CGRect)arg1 layer:(id)arg2;
@property(nonatomic) struct CGRect storedRect; // @synthesize storedRect=_storedRect;
@property(retain, nonatomic) NSArray *layersForSnapping; // @synthesize layersForSnapping=_layersForSnapping;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldConstrainProportions;
- (void)setRectForSnapping:(struct CGRect)arg1;
- (struct CGRect)rectForSnapping;
- (struct CGRect)boundsRect;
- (void)concatAncestorsAndSelfTransforms;
- (struct CGAffineTransform)preDrawingTransform;
- (void)refreshOverlayWithAbsoluteMargins:(struct CGSize)arg1;
- (double)rotation;
- (BOOL)supportsResizingForSnapping;
- (struct CGRect)originalRect;
- (id)artboardForSnapping;
- (id)snapLines;
- (id)snapItemForDrawing;
- (void)snapInBlock:(CDUnknownBlockType)arg1;
- (id)otherLayersForSnapping;
- (id)otherLayersForSizeSnapping;

@end

