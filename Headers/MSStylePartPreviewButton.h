//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorButton.h"

@class MSStylePart, NSColor;
@protocol MSStylePartPreviewButtonDelegate;

@interface MSStylePartPreviewButton : MSInspectorButton
{
    MSStylePart *_stylePart;
    NSColor *_color;
    id <MSStylePartPreviewButtonDelegate> _delegate;
    id _dragOwner;
}

@property(nonatomic) __weak id dragOwner; // @synthesize dragOwner=_dragOwner;
@property(nonatomic) __weak id <MSStylePartPreviewButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
@property(retain, nonatomic) MSStylePart *stylePart; // @synthesize stylePart=_stylePart;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (struct CGRect)contentRect;
- (void)drawButton;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;

@end
