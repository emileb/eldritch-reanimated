#ifndef RODINBTNODEPARALLEL_H
#define RODINBTNODEPARALLEL_H

#include "rodinbtnodecomposite.h"

class RodinBTNodeParallel : public RodinBTNodeComposite
{
public:
	RodinBTNodeParallel();
	virtual ~RodinBTNodeParallel();

	DEFINE_RODINBTNODE_FACTORY( Parallel );

	virtual void		InitializeFromDefinition( const SimpleString& DefinitionName );
	virtual ETickStatus Tick( const float DeltaTime );
	virtual void		OnStart();
	virtual void		OnFinish();
	virtual void		OnChildCompleted( RodinBTNode* pChildNode, ETickStatus TickStatus );

#if BUILD_DEV
	virtual void		Report();
#endif

protected:
	Array<ETickStatus>	m_ChildStatuses;		// Parallel array to m_Children (declared in Composite)
	int					m_NumChildrenToSucceed;
	int					m_NumChildrenToFail;
};

#endif // RODINBTNODEPARALLEL_H