//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSOptionalRenderer : NSObject
{
    id _baseRenderer;
    NSString *_disableSetting;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *disableSetting; // @synthesize disableSetting=_disableSetting;
@property(retain, nonatomic) id baseRenderer; // @synthesize baseRenderer=_baseRenderer;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL enabled;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseRenderer:(id)arg1 disableSetting:(id)arg2;

@end
