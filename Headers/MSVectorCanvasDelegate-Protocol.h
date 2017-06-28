//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSVectorCanvas, NSArray, NSIndexPath;

@protocol MSVectorCanvasDelegate <NSObject>
- (void)vectorCanvasDidEditPoints:(MSVectorCanvas *)arg1;
- (void)vectorCanvas:(MSVectorCanvas *)arg1 didSelectLayers:(NSArray *)arg2;
- (void)vectorCanvas:(MSVectorCanvas *)arg1 didDeselectHandlesAtIndexPaths:(NSArray *)arg2;
- (void)vectorCanvas:(MSVectorCanvas *)arg1 didSelectHandlesAtIndexPaths:(NSArray *)arg2;
- (void)vectorCanvas:(MSVectorCanvas *)arg1 didUnhighlightHandleAtIndexPath:(NSIndexPath *)arg2;
- (void)vectorCanvas:(MSVectorCanvas *)arg1 didHighlightHandleAtIndexPath:(NSIndexPath *)arg2;
@end

