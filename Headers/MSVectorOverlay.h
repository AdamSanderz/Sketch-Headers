//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSHandleOverlay.h"

@interface MSVectorOverlay : MSHandleOverlay
{
    // Error parsing type: , name: selectionComponentType
    // Error parsing type: , name: activeHandleBehavior
}

- (id)initWithLayout:(id)arg1;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 clickCount:(long long)arg2 modifierFlags:(unsigned long long)arg3;
@property(nonatomic) long long activeHandleBehavior; // @synthesize activeHandleBehavior;
@property(nonatomic) long long selectionComponentType; // @synthesize selectionComponentType;
- (id)specifierForComponentAtPoint:(struct CGPoint)arg1;

@end
