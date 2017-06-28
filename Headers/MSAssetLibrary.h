//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSLibraryObject.h"
#import "MSSortable.h"
#import "NSCoding.h"

@class MSDocumentData, NSData, NSDate, NSObject<NSCopying><NSCoding>, NSString, NSURL;

@interface MSAssetLibrary : NSObject <MSSortable, NSCoding, MSLibraryObject>
{
    BOOL _valid;
    BOOL _enabled;
    NSURL *_locationOnDisk;
    MSDocumentData *_document;
    NSString *_name;
    id <MSAssetLibraryDelegate> _delegate;
    NSData *_bookmark;
}

@property(retain, nonatomic) NSData *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) __weak id <MSAssetLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MSDocumentData *document; // @synthesize document=_document;
@property(retain) NSURL *locationOnDisk; // @synthesize locationOnDisk=_locationOnDisk;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)resolveLocationOnDisk;
- (id)symbolWithID:(struct NSObject *)arg1;
@property(readonly, nonatomic) NSObject<NSCopying><NSCoding> *libraryID;
@property(readonly, nonatomic) NSDate *dateLastModified;
- (void)unload;
- (void)loadAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)loadSynchronously;
- (void)handleDocumentLoaded:(id)arg1;
- (id)loadDocument;
@property(readonly, nonatomic) BOOL isUserLibrary;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAtURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

