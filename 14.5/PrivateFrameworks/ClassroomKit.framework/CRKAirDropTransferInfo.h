//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface CRKAirDropTransferInfo : NSObject
{
    _Bool _autoAccept;
    _Bool _hideProgress;
    NSString *_senderName;
    NSData *_previewImageData;
    NSString *_bundleID;
    NSArray *_items;
    NSArray *_files;
    NSString *_sourceBundleIdentifier;
    NSString *_itemsDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *itemsDescription; // @synthesize itemsDescription=_itemsDescription;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(nonatomic) _Bool hideProgress; // @synthesize hideProgress=_hideProgress;
@property(nonatomic) _Bool autoAccept; // @synthesize autoAccept=_autoAccept;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)addFiles:(id)arg1;
- (void)addItems:(id)arg1;

@end

