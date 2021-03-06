//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPage, SSSScreenshotModificationInfo;

@interface SSSPDFPageUndoObject : NSObject
{
    PDFPage *_page;
    long long _index;
    SSSScreenshotModificationInfo *_modificationInfo;
}

+ (id)newPageUndoObjectWithPDFPage:(id)arg1 index:(long long)arg2 modificationInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) SSSScreenshotModificationInfo *modificationInfo; // @synthesize modificationInfo=_modificationInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) PDFPage *page; // @synthesize page=_page;

@end

