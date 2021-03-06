//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSTextPreviewLayerMetadata, NSDictionary;

@interface MSTextPreviewLayerData : NSObject
{
    struct CGPDFDocument *_document;
    NSDictionary *_objectIDToPageNumberDictionary;
    MSTextPreviewLayerMetadata *_metadata;
}

@property(retain, nonatomic) MSTextPreviewLayerMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (struct CGRect)findPreviewRectForLayerID:(id)arg1;
- (struct CGPDFPage *)findPageForLayer:(id)arg1;
- (void)dealloc;
- (id)initWithPDFData:(id)arg1 metadata:(id)arg2;

@end

