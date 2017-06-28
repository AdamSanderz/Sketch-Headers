//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBitmapImageRep.h"

@interface NSBitmapImageRep (CHBitmapRepAdditions)
+ (id)bitmapImageRepWithSize:(struct CGSize)arg1 flags:(unsigned long long)arg2 colorSpace:(id)arg3 drawingBlock:(CDUnknownBlockType)arg4;
- (BOOL)hasTransparentPixels;
- (id)bitSafeBitmapImageRep;
- (id)bitmapImageRepByFlippingVertical;
- (id)bitmapImageRepByCroppingToRect:(struct CGRect)arg1;
- (struct CGRect)bitSafeFastRectForTrimming:(char *)arg1;
- (struct CGRect)bitSafeFastRectForTrimming;
- (struct CGRect)rectForTrimming:(char *)arg1;
- (struct CGRect)rectForTrimming;
- (id)PNGRepresentationWithInterlaced:(BOOL)arg1 includeAlpha:(BOOL)arg2;
- (id)PNGRepresentationWithInterlaced:(BOOL)arg1;
- (id)JPGRepresentationWithCompression:(double)arg1 progressive:(BOOL)arg2;
@end

