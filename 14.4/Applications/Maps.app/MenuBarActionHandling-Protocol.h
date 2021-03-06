//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ShortcutActionHandling-Protocol.h"

@protocol MenuBarActionHandling <ShortcutActionHandling>
- (void)requestNewTab:(id)arg1;
- (void)requestNewWindow:(id)arg1;
- (void)presentAddToFavorites;
- (void)presentAddToCollection:(id)arg1;
- (void)presentAddNewCollection;
- (void)_share:(id)arg1;
- (void)printCurrentState;
- (void)toggleMapScale;
- (void)toggleDirections;
- (void)toggleSidebar;
- (void)selectAll:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)copy:(id)arg1;
- (void)find:(id)arg1;
@end

