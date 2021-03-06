//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem
{
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    NSURL *_cachedURL;
    NSURL *_cachedURLInLocalContainer;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    NSNumber *_cachedFileObjectID;
    _Bool _cachedRenameable;
}

- (void).cxx_destruct;
- (_Bool)renameable;
- (id)sortPath;
- (id)sortPathComponents;
- (unsigned long long)indentationLevel;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)arg1;
- (void)_modelChanged;
- (id)modificationDate;
- (id)tags;
- (id)urlInLocalContainer;
- (id)contentType;
- (id)url;
- (id)subtitle2;
- (id)subtitle;
- (id)title;
- (long long)type;
- (void)cacheValues:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_removeCachedValues;
- (id)initWithMetadataItem:(id)arg1;

@end

