//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKStoreManagerItem-Protocol.h>
#import <VisualTestKit/VTKTestAttachment-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VTKStoreManagerImageItem : NSObject <VTKStoreManagerItem, VTKTestAttachment>
{
    NSData *_itemData;
    unsigned long long _itemType;
    NSString *_fileExtension;
    NSString *_fileSufix;
}

+ (id)itemWithImage:(id)arg1 itemType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fileSufix; // @synthesize fileSufix=_fileSufix;
@property(readonly, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) NSData *itemData; // @synthesize itemData=_itemData;
- (id)attachWithThestID:(id)arg1;
- (id)fileNameWithTestID:(id)arg1;
- (id)initWithData:(id)arg1 itemType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

