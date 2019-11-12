//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class MSDocumentProgressView, MSDocumentsCollectionItem, NSString;
@protocol MSDocumentsCollectionViewItemDelegate;

@interface MSDocumentsCollectionViewItem : NSCollectionViewItem
{
    struct CGSize _designedImageViewSize;
    id <MSDocumentsCollectionViewItemDelegate> _delegate;
    MSDocumentProgressView *_progressView;
}

@property(nonatomic) __weak MSDocumentProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) id <MSDocumentsCollectionViewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)validateRevealInCloudMenuItem:(id)arg1;
- (BOOL)validateRevealInFinderMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)fetchPreviewImage;
- (void)setRepresentedObject:(id)arg1;
@property(readonly, nonatomic) MSDocumentsCollectionItem *collectionItem;
- (void)setNeedsDisplaySelection;
- (void)setSelected:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
