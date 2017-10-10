//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAssetLibrary, NSImage, NSString;

@interface MSAssetPreferenceItem : NSObject
{
    id <MSAssetPreferenceItemDelegate> _delegate;
    MSAssetLibrary *_library;
    NSImage *_preview;
}

+ (id)preferenceItemForLibrary:(id)arg1;
@property(retain, nonatomic) NSImage *preview; // @synthesize preview=_preview;
@property(readonly, nonatomic) MSAssetLibrary *library; // @synthesize library=_library;
@property(nonatomic) __weak id <MSAssetPreferenceItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) NSString *secondaryTitle;
@property(readonly, nonatomic) NSString *modificationDate;
@property(readonly, nonatomic) BOOL valid;
@property(nonatomic) BOOL enabled;
@property(readonly, nonatomic) NSString *name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)setupObservers;
- (id)initWithLibrary:(id)arg1;

@end

