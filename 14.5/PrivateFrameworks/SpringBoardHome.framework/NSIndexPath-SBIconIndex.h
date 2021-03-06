//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (SBIconIndex)
+ (id)indexPathWithFolderIconIndex:(unsigned long long)arg1 folderListIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3 listIndex:(unsigned long long)arg4;
+ (id)indexPathWithIconIndex:(unsigned long long)arg1 listIndex:(unsigned long long)arg2;
- (id)sb_iconPathDescription;
- (id)sb_indexPathByReplacingLastIconIndex:(unsigned long long)arg1;
- (_Bool)sb_isOnSameListAsIndexPath:(id)arg1;
- (id)sb_indexPathByAddingPathComponentWithListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2;
- (id)sb_indexPathByAddingIndexPath:(id)arg1;
- (id)sb_lastIconPathComponent;
- (id)sb_indexPathByRemovingLastIconIndex;
- (id)sb_indexPathByRemovingLastIconPathComponent;
- (id)sb_firstIconPathComponent;
- (id)sb_iconRelativePathComponents;
- (unsigned long long)sb_lastIconIndex;
- (unsigned long long)sb_lastListIndex;
- (unsigned long long)sb_firstIconIndex;
- (unsigned long long)sb_firstListIndex;
- (unsigned long long)sb_iconPathCount;
- (unsigned long long)sbListIndex;
- (unsigned long long)sbIconIndex;
@end

