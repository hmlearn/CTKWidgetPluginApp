#include "pluginactivator.h"
#include "pluginimpl.h"

#include <log4qt/logger.h>
#include <log4qt/logmanager.h>
#include <log4qt/loggerrepository.h>
#include <log4qt/propertyconfigurator.h>

void PluginActivator::start(ctkPluginContext *context)
{
    Log4Qt::LogManager::setHandleQtMessages(true);

    s.reset(new PluginImpl(context));
}

void PluginActivator::stop(ctkPluginContext *context)
{
    Q_UNUSED(context);
}
