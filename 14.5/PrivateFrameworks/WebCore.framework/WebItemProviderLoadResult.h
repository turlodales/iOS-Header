//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSItemProvider;

__attribute__((visibility("hidden")))
@interface WebItemProviderLoadResult : NSObject
{
    struct RetainPtr<NSMutableDictionary<NSString *, NSURL *>> _fileURLs;
    struct RetainPtr<NSItemProvider> _itemProvider;
    struct RetainPtr<NSArray<NSString *>> _typesToLoad;
}

+ (id)loadResultWithItemProvider:(id)arg1 typesToLoad:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) NSArray *loadedTypeIdentifiers;
@property(readonly, nonatomic) NSArray *loadedFileURLs;
- (void)setFileURL:(id)arg1 forType:(id)arg2;
- (id)fileURLForType:(id)arg1;
@property(readonly, nonatomic) NSArray *typesToLoad;
@property(readonly, nonatomic) _Bool canBeRepresentedAsFileUpload;
- (id)initWithItemProvider:(id)arg1 typesToLoad:(id)arg2;

@end

