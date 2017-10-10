//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSCloudShareUploadController, NSError, SCKShare;

@protocol MSCloudShareUploadControllerDelegate <NSObject>
- (void)cloudShareController:(MSCloudShareUploadController *)arg1 didUploadShare:(SCKShare *)arg2;

@optional
- (void)cloudShareController:(MSCloudShareUploadController *)arg1 willUploadShareAsNew:(BOOL)arg2;
- (void)cloudShareController:(MSCloudShareUploadController *)arg1 didChangeProgress:(double)arg2;
- (void)cloudShareController:(MSCloudShareUploadController *)arg1 uploadDidFailWithError:(NSError *)arg2;
@end

