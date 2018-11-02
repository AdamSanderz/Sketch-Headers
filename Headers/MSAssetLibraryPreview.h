//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBezierPath, NSImage;

@interface MSAssetLibraryPreview : NSView
{
    NSImage *_libraryPreview;
    NSImage *_preview;
}

@property(retain, nonatomic) NSImage *preview; // @synthesize preview=_preview;
@property(nonatomic) __weak NSImage *libraryPreview; // @synthesize libraryPreview=_libraryPreview;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSBezierPath *contentPath;
@property(readonly, nonatomic) struct CGRect previewFrame;
- (id)centeredThumbFromImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
