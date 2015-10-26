#import "NSObject.h"

@class MSDocumentData, MSLayer, MSPage;

@protocol MSDocumentDataDelegate <NSObject>
- (void)layerTreeLayoutDidChange;
- (void)didAddPage:(MSPage *)arg1;
- (void)willRemovePage:(MSPage *)arg1;
- (void)documentData:(MSDocumentData *)arg1 immediatelyShowSelectionForLayer:(MSLayer *)arg2;
- (void)documentData:(MSDocumentData *)arg1 temporarilyHideSelectionForLayer:(MSLayer *)arg2;
- (void)documentData:(MSDocumentData *)arg1 syncSharedObject:(id <MSSharedObjectInstance>)arg2;
- (void)documentData:(MSDocumentData *)arg1 didChangeToPage:(MSPage *)arg2;
@end
