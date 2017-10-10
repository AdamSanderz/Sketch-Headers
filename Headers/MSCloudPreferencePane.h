//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPreferencePane.h"

@class MSCloudPreferencesViewController, NSStoryboard, SCKAPIOperation;

@interface MSCloudPreferencePane : MSPreferencePane
{
    NSStoryboard *_cloudStoryboard;
    MSCloudPreferencesViewController *_currentViewController;
    SCKAPIOperation *_updateUserOperation;
}

+ (long long)cloudLoginOverrideBehaviorWithUser:(id)arg1;
+ (long long)cloudLoginSwitchPlatformBehavior;
+ (void)loginWithURLParameters:(id)arg1;
+ (id)toolbarIcon;
+ (id)title;
+ (id)identifier;
@property(retain, nonatomic) SCKAPIOperation *updateUserOperation; // @synthesize updateUserOperation=_updateUserOperation;
@property(retain, nonatomic) MSCloudPreferencesViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSStoryboard *cloudStoryboard; // @synthesize cloudStoryboard=_cloudStoryboard;
- (void).cxx_destruct;
- (void)updateAuthenticatedUser;
@property(readonly, nonatomic) BOOL isUpdatingAuthenticatedUser;
- (void)cloudURLDidOpenNotification:(id)arg1;
- (void)applicationDidOpenURL:(id)arg1;
- (void)platformDidChangeNotification:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)userDidChangeNotification:(id)arg1;
- (void)fixFirstResponder;
- (void)updateWindowFrame;
- (void)showRootViewController;
- (void)showAccountViewController;
- (void)showIntroViewController;
- (void)showCloudViewControllerOfClass:(Class)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

@end

