//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@class NSDictionary, NSString;

@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
    NSDictionary *_options;
}

+ (double)backgroundJobTimeout;
+ (id)backgroundJobName;
+ (_Bool)supportsBackgroundJob;
- (void).cxx_destruct;
- (void)_enrichYearHighlights:(id)arg1 monthsHighlights:(id)arg2 withManager:(id)arg3 enrichmentprogressBlock:(CDUnknownBlockType)arg4;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

