//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MSDocumentationSearchEntry : NSObject
{
    BOOL _isDuplicateResult;
    NSDictionary *_data;
}

+ (void)markSearchEntriesAsDuplicates:(id)arg1;
+ (id)searchEntryWithDictionary:(id)arg1;
@property BOOL isDuplicateResult; // @synthesize isDuplicateResult=_isDuplicateResult;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)show;
- (BOOL)matchesSearchQuery:(id)arg1;
- (id)titles;

@end
