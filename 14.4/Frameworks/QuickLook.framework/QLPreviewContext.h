//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString, QLItem, UIColor;
@protocol QLItemThumbnailGeneratorProtocolInternal;

@interface QLPreviewContext : NSObject <NSSecureCoding>
{
    _Bool _canBeEdited;
    _Bool _canBeShared;
    id <QLItemThumbnailGeneratorProtocolInternal> _thumbnailGenerator;
    NSString *_previewTitle;
    NSString *_contentType;
    unsigned long long _editedFileBehavior;
    NSString *_password;
    unsigned long long _previewItemType;
    UIColor *_backgroundColor;
    NSNumber *_itemSize;
    long long _processIdentifier;
    QLItem *_item;
    NSDictionary *_clientPreviewOptions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDictionary *clientPreviewOptions; // @synthesize clientPreviewOptions=_clientPreviewOptions;
@property(retain) QLItem *item; // @synthesize item=_item;
@property long long processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(retain) NSNumber *itemSize; // @synthesize itemSize=_itemSize;
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property unsigned long long previewItemType; // @synthesize previewItemType=_previewItemType;
@property(copy) NSString *password; // @synthesize password=_password;
@property unsigned long long editedFileBehavior; // @synthesize editedFileBehavior=_editedFileBehavior;
@property _Bool canBeShared; // @synthesize canBeShared=_canBeShared;
@property _Bool canBeEdited; // @synthesize canBeEdited=_canBeEdited;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain) NSString *previewTitle; // @synthesize previewTitle=_previewTitle;
@property(retain) id <QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

