//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSObject<OS_dispatch_queue>;

@interface SMKDiskCache : NSObject
{
    id <SMKDiskCacheDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileManager *_fileManager;
}

@property(retain) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <SMKDiskCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (BOOL)containsObjectForKey:(id)arg1;
- (id)filePathForKey:(id)arg1;
- (id)fileNameForKey:(id)arg1;
- (void)removeCacheDirectory;
- (void)createCacheDirectory;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)dealloc;
- (id)initWithQOS:(unsigned int)arg1;
- (id)init;

@end

