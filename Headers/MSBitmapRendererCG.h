//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayerRendererCG.h"

@interface MSBitmapRendererCG : MSLayerRendererCG
{
}

- (void)drawNineSliceImageWithStyle:(id)arg1 layer:(id)arg2 rect:(struct CGRect)arg3 context:(id)arg4;
- (BOOL)canDrawNineSliceContentForLayer:(id)arg1 rect:(struct CGRect)arg2;
- (void)drawImageWithStyle:(id)arg1 layer:(id)arg2 rect:(struct CGRect)arg3 context:(id)arg4;
- (id)imageForLayerWithStyle:(id)arg1 layer:(id)arg2 context:(id)arg3;
- (void)drawImageAndFillsForPath:(id)arg1 style:(id)arg2 layer:(id)arg3 rect:(struct CGRect)arg4 context:(id)arg5;
- (void)drawBitmapLayer:(id)arg1 context:(id)arg2 inRect:(struct CGRect)arg3;
- (void)renderLayerUncached:(id)arg1 ignoreDirtyRect:(BOOL)arg2 context:(id)arg3;

@end

