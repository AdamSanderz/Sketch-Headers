//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSInsertMenuAction : MSDocumentAction
{
    id <NSObject> _documentCloseObserver;
}

@property(retain, nonatomic) id <NSObject> documentCloseObserver; // @synthesize documentCloseObserver=_documentCloseObserver;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)addInsertSharedTextToMenu:(id)arg1;
- (void)addInsertSymbolsToMenu:(id)arg1;
- (id)label;
- (id)tooltip;
- (id)submenuActionIDs;

@end

