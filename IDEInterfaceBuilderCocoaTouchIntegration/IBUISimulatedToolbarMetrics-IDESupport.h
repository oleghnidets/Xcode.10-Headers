//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBUISimulatedToolbarMetrics.h"

@interface IBUISimulatedToolbarMetrics (IDESupport)
+ (id)simulatedToolbarMetricsForToolbar:(id)arg1;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
- (id)metricChainWithPrecedingMetric:(id)arg1;
- (id)simulatedBarMetricsByRemovingTintColor;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)displayName;
- (BOOL)isEqual:(id)arg1;
- (id)toolbarMetricRepresentation;
- (void)applyMetricsToBar:(id)arg1;
- (unsigned long long)barEdge;
- (Class)barClass;
- (id)ibWidgetType;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;
@end

